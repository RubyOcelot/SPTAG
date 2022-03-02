cmake_minimum_required(VERSION 3.20)
project(IVF)

set(CMAKE_CXX_STANDARD 14)

add_library(IVF library.cpp inc/api.h inc/FowardDefine.h src/IndexSearcher.cpp inc/Statistics.h src/Statistics.cpp inc/interfaces/Scorer.h inc/PostingItem.h inc/interfaces/ScoreScheme.h inc/IndexSearcher.h inc/interfaces/Query.h inc/interfaces/Keyword.h inc/TopDocs.h inc/Collector.h inc/utils/DocPriorityQueue.h inc/DocVectorItem.h src/Scorer.cpp src/SimpleScorer.cpp inc/SimpleScorer.h src/BooleanScorer.cpp inc/BooleanScorer.h src/BulkScorer.cpp inc/BulkScorer.h inc/utils/Bits.h src/KeyVector.cpp inc/KeyVector.h inc/utils/DocWithScore.h src/KeywordQuery.cpp inc/KeywordQuery.h src/BooleanQuery.cpp inc/BooleanQuery.h src/VectorScoreScheme.cpp inc/VectorScoreScheme.h inc/TermTfidfScoreScheme.cpp inc/TermTfidfScoreScheme.h src/PostingItemIter.cpp inc/PostingItemIter.h inc/utils/DistanceFunction.h)
