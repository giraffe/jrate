########################################################### -*- Makefile -*- ##
## $Id: Makefile.am 551 2005-07-08 21:58:00Z mdeters $
###############################################################################

SUBDIRS = \
	DeadlineMissHandler \
	PeriodicTimer

# necessary since we comment out noinst_PROGRAMS below
EXTRA_DIST = \
	$(nobase_pkgdocdemos_DATA) \
	$(nobase_pkgdocdemos_SCRIPTS)

AM_GCJFLAGS = --classpath=$(JRATE_GCC_BUILD_DIR)/$(target)/libjava:$(JRATE_BUILD_DIR)/classes:.

pkgdocdemosdir = $(datadir)/doc/$(PACKAGE)/demos

# noinst_PROGRAMS = \
#	Echo/EchoClient \
#	Echo/EchoServer \
#	EventHandling/simpleEventHandlingDemo \
#	EventHandling/eventHandlingDemo \
#	ExecuteInArea/executeInAreaDemo \
#	HelloWorld/helloWorld \
#	InvalidReference/heapToScope \
#	InvalidReference/staticToScope \
#	InvalidReference/invalidFieldSet \
#	MemoryArea/memoryDemo \
#	OutOfMemory/outOfMemoryDemo \
#	OutOfScopeException/outOfScopeException \
#	PeriodicParameters/periodicParametersDemo \
#	PeriodicThread/periodicThreadDemo \
#	ScopedMemoryCycle/scopedMemoryCycle \
#	ScopedPortal/scopedPortal \
#	Threads/realTimeRunner \
#	Threads/runner

nobase_pkgdocdemos_DATA = \
	$(Echo_EchoClient_SOURCES) \
	$(Echo_EchoServer_SOURCES) \
	$(EventHandling_simpleEventHandlingDemo_SOURCES) \
	$(EventHandling_eventHandlingDemo_SOURCES) \
	$(ExecuteInArea_executeInAreaDemo_SOURCES) \
	$(HelloWorld_helloWorld_SOURCES) \
	$(InvalidReference_heapToScope_SOURCES) \
	$(InvalidReference_staticToScope_SOURCES) \
	$(InvalidReference_invalidFieldSet_SOURCES) \
	$(MemoryArea_memoryDemo_SOURCES) \
	$(OutOfMemory_outOfMemoryDemo_SOURCES) \
	$(OutOfScopeException_outOfScopeException_SOURCES) \
	$(PeriodicParameters_periodicParametersDemo_SOURCES) \
	$(PeriodicThread_periodicThreadDemo_SOURCES) \
	$(ScopedMemoryCycle_scopedMemoryCycle_SOURCES) \
	$(ScopedPortal_scopedPortal_SOURCES) \
	$(Threads_realTimeRunner_SOURCES) \
	$(Threads_runner_SOURCES)

nobase_pkgdocdemos_DATA += \
	OutOfMemory/OutOfMemoryDemo.html

nobase_pkgdocdemos_SCRIPTS = \
	MemoryArea/run.py

Echo_EchoClient_SOURCES = Echo/EchoClient.java
Echo_EchoClient_LDFLAGS = --main=EchoClient

Echo_EchoServer_SOURCES = Echo/EchoServer.java
Echo_EchoServer_LDFLAGS = --main=EchoServer

EventHandling_simpleEventHandlingDemo_SOURCES = EventHandling/SimpleEventHandlingDemo.java
EventHandling_simpleEventHandlingDemo_LDFLAGS = --main=SimpleEventHandlingDemo

EventHandling_eventHandlingDemo_SOURCES = EventHandling/EventHandlingDemo.java
EventHandling_eventHandlingDemo_LDFLAGS = --main=EventHandlingDemo

ExecuteInArea_executeInAreaDemo_SOURCES = ExecuteInArea/ExecuteInAreaDemo.java
ExecuteInArea_executeInAreaDemo_LDFLAGS = --main=ExecuteInAreaDemo

HelloWorld_helloWorld_SOURCES = HelloWorld/HelloWorld.java
HelloWorld_helloWorld_LDFLAGS = --main=HelloWorld

InvalidReference_heapToScope_SOURCES = InvalidReference/HeapToScope.java
InvalidReference_heapToScope_LDFLAGS = --main=HeapToScope

InvalidReference_staticToScope_SOURCES = InvalidReference/StaticToScope.java
InvalidReference_staticToScope_LDFLAGS = --main=StaticToScope

InvalidReference_invalidFieldSet_SOURCES = InvalidReference/InvalidFieldSet.java
InvalidReference_invalidFieldSet_LDFLAGS = --main=InvalidFieldSet

MemoryArea_memoryDemo_SOURCES = MemoryArea/MemoryAreaDemo.java
MemoryArea_memoryDemo_LDFLAGS = --main=MemoryAreaDemo

OutOfMemory_outOfMemoryDemo_SOURCES = OutOfMemory/OutOfMemoryDemo.java
OutOfMemory_outOfMemoryDemo_LDFLAGS = --main=OutOfMemoryDemo

OutOfScopeException_outOfScopeException_SOURCES = OutOfScopeException/OutOfScopeException.java
OutOfScopeException_outOfScopeException_LDFLAGS = --main=OutOfScopeException

PeriodicParameters_periodicParametersDemo_SOURCES = PeriodicParameters/PeriodicParametersDemo.java
PeriodicParameters_periodicParametersDemo_LDFLAGS = --main=PeriodicParametersDemo

PeriodicThread_periodicThreadDemo_SOURCES = PeriodicThread/PeriodicThreadDemo.java
PeriodicThread_periodicThreadDemo_LDFLAGS = --main=PeriodicThreadDemo

ScopedMemoryCycle_scopedMemoryCycle_SOURCES = ScopedMemoryCycle/ScopedMemoryCycle.java
ScopedMemoryCycle_scopedMemoryCycle_LDFLAGS = --main=ScopedMemoryCycle

ScopedPortal_scopedPortal_SOURCES = ScopedPortal/ScopedPortal.java
ScopedPortal_scopedPortal_LDFLAGS = --main=ScopedPortal

Threads_realTimeRunner_SOURCES = Threads/RealTimeRunner.java
Threads_realTimeRunner_LDFLAGS = --main=RealTimeRunner

Threads_runner_SOURCES = Threads/Runner.java
Threads_runner_LDFLAGS = --main=Runner
