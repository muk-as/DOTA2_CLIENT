#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x538
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CBaseFilter : public server::CLogicalEntity
    {
    public:
        bool m_bNegated; // 0x4e0        
        [[maybe_unused]] std::uint8_t pad_0x4e1[0x7]; // 0x4e1
        entity2::CEntityIOOutput m_OnPass; // 0x4e8        
        entity2::CEntityIOOutput m_OnFail; // 0x510        
        
        // Datamap fields:
        // void InputTestActivator; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseFilter because it is not a standard-layout class
    static_assert(sizeof(CBaseFilter) == 0x538);
};
