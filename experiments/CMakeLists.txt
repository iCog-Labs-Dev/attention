INCLUDE_DIRECTORIES(${CMAKE_BINARY_DIR})
find_package(Boost REQUIRED)

include_directories(${Boost_INCLUDE_DIRS})
ADD_LIBRARY(attentionexperiment SHARED
	ExperimentSetupModule
	SentenceGenStimulateAgent
)

TARGET_LINK_LIBRARIES(attentionexperiment
	${ATTENTION_LIBRARIES}
	${COGSERVER_LIBRARIES}
	${ATOMSPACE_LIBRARIES}
)
