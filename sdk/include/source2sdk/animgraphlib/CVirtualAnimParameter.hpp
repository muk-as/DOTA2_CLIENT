#pragma once
#include "source2sdk/animationsystem/AnimParamType_t.hpp"
#include "source2sdk/animgraphlib/CAnimParameterBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x80
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CVirtualAnimParameter : public animgraphlib::CAnimParameterBase
    {
    public:
        CUtlString m_expressionString; // 0x70        
        animationsystem::AnimParamType_t m_eParamType; // 0x78        
        [[maybe_unused]] std::uint8_t pad_0x79[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CVirtualAnimParameter because it is not a standard-layout class
    static_assert(sizeof(CVirtualAnimParameter) == 0x80);
};
