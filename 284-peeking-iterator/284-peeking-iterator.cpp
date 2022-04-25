/*
 * Below is the interface for Iterator, which is already defined for you.
 * **DO NOT** modify the interface for Iterator.
 *
 *  class Iterator {
 *		struct Data;
 * 		Data* data;
 *  public:
 *		Iterator(const vector<int>& nums);
 * 		Iterator(const Iterator& iter);
 *
 * 		// Returns the next element in the iteration.
 *		int next();
 *
 *		// Returns true if the iteration has more elements.
 *		bool hasNext() const;
 *	};
 */

class PeekingIterator : public Iterator {
public:
    int i=0;
    vector<int> nums2;
    int size=0;
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	    nums2=nums;
	}
	
    // Returns the next element in the iteration without advancing the iterator.
	int peek() {
        return nums2[i];
	}
	
	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next() {
        return nums2[i++];
	}
	
	bool hasNext() const {
	    return i<nums2.size();
	}
};