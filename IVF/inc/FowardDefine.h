#ifndef IVF_FOWARDDEFINE_H
#define IVF_FOWARDDEFINE_H

#include <vector>
#include <cstdint>
#include <list>
#include <string>
#include <bitset>
#include <utility>
#include <iostream>

typedef int64_t DocId;
typedef std::vector<float> VectorValueType;
class DocWithScore;
class DocPriorityQueue;
class Bits;
class TopDocs;
class DistanceFunction;
class L2DistanceFunction;

enum LogicOperator{AND,OR};

class Scorer;
class SimpleScorer;
class BooleanScorer;
class Keyword;
class KeyVector;
class Query;
class KeywordQuery;
class BooleanQuery;
//class PostingItem;
//class vectorPostingStatistics;
//class KeywordStatistics;
//class CollectionStatistics;
class ScoreScheme;
typedef ScoreScheme PostingItem;
class PostingStatistics;
//
class Collector;
class DocVectorItem;

#endif //IVF_FOWARDDEFINE_H
