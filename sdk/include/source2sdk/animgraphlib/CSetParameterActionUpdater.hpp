#pragma once
#include "source2sdk/animgraphlib/CAnimActionUpdater.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
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
    // Size: 0x30
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSetParameterActionUpdater : public animgraphlib::CAnimActionUpdater
    {
    public:
        animgraphlib::CAnimParamHandle m_hParam; // 0x18        
        CAnimVariant m_value; // 0x1a        
        [[maybe_unused]] std::uint8_t pad_0x2b[0x5];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSetParameterActionUpdater because it is not a standard-layout class
    static_assert(sizeof(CSetParameterActionUpdater) == 0x30);
};
