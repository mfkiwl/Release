﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_DEMOREFLECTION
#define VCZH_WORKFLOW_COMPILER_GENERATED_DEMOREFLECTION

#include "Demo.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#endif

/***********************************************************************
Reflection
***********************************************************************/

namespace vl
{
	namespace reflection
	{
		namespace description
		{
#ifndef VCZH_DEBUG_NO_REFLECTION
			DECL_TYPE_INFO(::demo::EnglishNumbersController)
			DECL_TYPE_INFO(::demo::EnglishNumbersControllerConstructor)
			DECL_TYPE_INFO(::demo::EnglishNumbersControllerTabPage)
			DECL_TYPE_INFO(::demo::EnglishNumbersControllerTabPageConstructor)
			DECL_TYPE_INFO(::demo::MainWindow)
			DECL_TYPE_INFO(::demo::MainWindowConstructor)
			DECL_TYPE_INFO(::demo::MyTextItem)
			DECL_TYPE_INFO(::demo::SharedSizeItemTemplate)
			DECL_TYPE_INFO(::demo::SharedSizeItemTemplateConstructor)
			DECL_TYPE_INFO(::demo::SharedSizeTextItemTemplate)
			DECL_TYPE_INFO(::demo::SharedSizeTextItemTemplateConstructor)
#endif

			extern bool LoadDemoTypes();
		}
	}
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

#endif
