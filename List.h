#pragma once
#ifndef CUBE_H
#define CUBE_H

#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

	/* A wrapper for a C++ Cube object pointer */
	typedef struct {
		void* obj;
	} list_t;

	void AddNode_C(const list_t c, int addData_C);
	/*
	void DeleteNode_C(const list_t c, int delData_C);
	void PrintList_C(const list_t c);
	*/
#ifdef __cplusplus
}
#endif

#endif
