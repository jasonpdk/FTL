/* Pi-hole: A black hole for Internet advertisements
*  (c) 2019 Pi-hole, LLC (https://pi-hole.net)
*  Network-wide ad blocking via your own hardware.
*
*  FTL Engine
*  File prototypes
*
*  This file is copyright under the latest version of the EUPL.
*  Please see LICENSE file for your rights under this license. */
#ifndef FILE_H
#define FILE_H

int countlines(const char* fname);
int countlineswith(const char* str, const char* fname);
void check_blocking_status(void);
bool chmod_file(const char *filename, const mode_t mode);

#endif //FILE_H