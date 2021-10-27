﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_DEMOREFLECTION
#define VCZH_WORKFLOW_COMPILER_GENERATED_DEMOREFLECTION

#include "Demo.h"
#ifndef VCZH_DEBUG_NO_REFLECTION
#include "GacUIReflection.h"
#endif

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
			DECL_TYPE_INFO(::demo::IStringResourceStrings)
			DECL_TYPE_INFO(::demo::MainWindow)
			DECL_TYPE_INFO(::demo::MainWindowConstructor)
			DECL_TYPE_INFO(::demo::StringResource)

#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA

			BEGIN_INTERFACE_PROXY_NOPARENT_SHAREDPTR(::demo::IStringResourceStrings)
				::vl::WString Currency(const ::vl::WString& __vwsn_ls_0) override
				{
					INVOKEGET_INTERFACE_PROXY(Currency, __vwsn_ls_0);
				}
				::vl::WString DateFormat(::vl::DateTime __vwsn_ls_0) override
				{
					INVOKEGET_INTERFACE_PROXY(DateFormat, __vwsn_ls_0);
				}
				::vl::WString Label() override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(Label);
				}
				::vl::WString LongDate(::vl::DateTime __vwsn_ls_0) override
				{
					INVOKEGET_INTERFACE_PROXY(LongDate, __vwsn_ls_0);
				}
				::vl::WString LongTime(::vl::DateTime __vwsn_ls_0) override
				{
					INVOKEGET_INTERFACE_PROXY(LongTime, __vwsn_ls_0);
				}
				::vl::WString Number(const ::vl::WString& __vwsn_ls_0) override
				{
					INVOKEGET_INTERFACE_PROXY(Number, __vwsn_ls_0);
				}
				::vl::WString Sentence(const ::vl::WString& __vwsn_ls_0) override
				{
					INVOKEGET_INTERFACE_PROXY(Sentence, __vwsn_ls_0);
				}
				::vl::WString ShortDate(::vl::DateTime __vwsn_ls_0) override
				{
					INVOKEGET_INTERFACE_PROXY(ShortDate, __vwsn_ls_0);
				}
				::vl::WString ShortTime(::vl::DateTime __vwsn_ls_0) override
				{
					INVOKEGET_INTERFACE_PROXY(ShortTime, __vwsn_ls_0);
				}
				::vl::WString TimeFormat(::vl::DateTime __vwsn_ls_0) override
				{
					INVOKEGET_INTERFACE_PROXY(TimeFormat, __vwsn_ls_0);
				}
				::vl::WString Title() override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(Title);
				}
				::vl::WString YearMonthDate(::vl::DateTime __vwsn_ls_0) override
				{
					INVOKEGET_INTERFACE_PROXY(YearMonthDate, __vwsn_ls_0);
				}
			END_INTERFACE_PROXY(::demo::IStringResourceStrings)
#endif
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
