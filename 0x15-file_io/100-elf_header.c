#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_error - Prints an error message to stderr and exits with a status code 98.
 * @msg: The error message.
 * Return: Nothing.
 */
void print_error(const char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(98);
}

/**
 * read_elf_header - Reads the ELF header from the specified file descriptor.
 * @fd: The file descriptor of the ELF file.
 * @header: A pointer to the Elf64_Ehdr structure to store the ELF header.
 */
void read_elf_header(int fd, Elf64_Ehdr *header)
{
	if (read(fd, header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
		print_error("Error reading ELF header");
}

/**
 * print_elf_header - Prints the information contained in the ELF header.
 * @header: The ELF header.
 */
void print_elf_header(Elf64_Ehdr *header)
{
	printf("ELF header:\n");
	printf("	Magic:	");
	for (int i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");

	printf("  Class:                             %s\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n", (header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" : "UNIX - Unknown");
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %d (%s)\n", header->e_type, (header->e_type == ET_EXEC) ? "EXEC (Executable file)" : "DYN (Shared object file)");
    printf("  Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Displays the information contained in the ELF header at the start of an ELF file.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: 0 on success, or the corresponding exit code on failure.
 */
int main(int argc, char *argv[])
{
    int fd;
    Elf64_Ehdr header;

    if (argc != 2)
    {
        dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
        return (EXIT_FAILURE);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        dprintf(STDERR_FILENO, "Error opening file\n");
        return (EXIT_FAILURE);
    }

    if (read(fd, &header, sizeof(header)) == -1)
    {
        dprintf(STDERR_FILENO, "Error reading from file\n");
        close(fd);
        return (EXIT_FAILURE);
    }

    print_elf_header(&header);

    close(fd);
    return (EXIT_SUCCESS);
}
