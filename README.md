# Threshold-Logic-Unit

an implementation of a virtual neurone using The Threshold Logic Unit developpe by Warren McCulloch and Walter Pitts

```pseudo-code

class Threshold Logic Unit defined as:
    data member threshold : number
    data member weights : list of numbers of size X

    function member fire(inputs : list of booleans of size X) : boolean defined as:
        variable T : number
        T ← 0
        for each i in 1 to X do
            if inputs(i) is true then
                T ← T + weights(i)
            end if
        end for each
        if T > threshold then
            return true
        else:
            return false
        end if
    end function
end class

```
