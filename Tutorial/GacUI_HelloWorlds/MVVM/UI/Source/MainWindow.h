﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_MAINWINDOW
#define VCZH_WORKFLOW_COMPILER_GENERATED_MAINWINDOW

#include "HelloWorldPartialClasses.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#endif

namespace helloworld
{
	class MainWindow : public ::vl::presentation::controls::GuiWindow, public ::helloworld::MainWindowConstructor, public ::vl::reflection::Description<MainWindow>
	{
		friend class ::helloworld::MainWindowConstructor;
		friend class ::vl_workflow_global::__vwsnc1_HelloWorld_helloworld_MainWindowConstructor___vwsn_helloworld_MainWindow_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc2_HelloWorld_helloworld_MainWindowConstructor___vwsn_helloworld_MainWindow_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc3_HelloWorld_helloworld_MainWindowConstructor___vwsn_helloworld_MainWindow_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc4_HelloWorld_helloworld_MainWindowConstructor___vwsn_helloworld_MainWindow_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc5_HelloWorld_helloworld_MainWindowConstructor___vwsn_helloworld_MainWindow_Initialize__vl_reflection_description_IValueSubscription;
		friend struct ::vl_workflow_global::__vwsnf1_HelloWorld_helloworld_MainWindowConstructor___vwsn_helloworld_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf2_HelloWorld_helloworld_MainWindowConstructor___vwsn_helloworld_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf3_HelloWorld_helloworld_MainWindowConstructor___vwsn_helloworld_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf5_HelloWorld_helloworld_MainWindowConstructor___vwsn_helloworld_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf6_HelloWorld_helloworld_MainWindowConstructor___vwsn_helloworld_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf7_HelloWorld_helloworld_MainWindowConstructor___vwsn_helloworld_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsno4_HelloWorld_helloworld_MainWindowConstructor___vwsn_helloworld_MainWindow_Initialize_;
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MainWindow>;
#endif
	public:
		bool __vwsn_prop_HasLoggedIn;
		bool GetHasLoggedIn();
		void SetHasLoggedIn(bool __vwsn_value_);
		::vl::Event<void()> HasLoggedInChanged;
		::vl::Ptr<::vm::IViewModel> __vwsn_parameter_ViewModel;
		::vl::Ptr<::vm::IViewModel> GetViewModel();
	protected:
		void buttonSignUp_Clicked(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments);
	public:
		MainWindow(::vl::Ptr<::vm::IViewModel> __vwsn_ctor_parameter_ViewModel);
		~MainWindow();

	/* USER_CONTENT_BEGIN(custom members of ::helloworld::MainWindow) */
	/* USER_CONTENT_END() */
	};

}
#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

#endif
