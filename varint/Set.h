#ifndef ABSTRACT_SET_H__
#define ABSTRACT_SET_H__
class Set {
public:
	class Iterator {
		public:
		virtual int docID() = 0;

		virtual int nextDoc() = 0;
		// very efficient Advance method implemented with Skip list 
		virtual int Advance(int target) = 0;
	};
	virtual std::shared_ptr<Iterator> iterator()  const = 0;
	virtual void addDocs(unsigned int docids[],size_t start,size_t len)= 0;
	virtual void addDoc(unsigned int docId) = 0;
	// Free up unused memory
	virtual void compact() = 0; 
	// Force all docId are part of a compressed chunk. 
	virtual void flush() = 0;
	
	//Number of docIds in the set
	virtual bool find(unsigned int target) const = 0;
	
	virtual ~Set() = 0;
};
#endif  // ABSTRACT_SET_H__