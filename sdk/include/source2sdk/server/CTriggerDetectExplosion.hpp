#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"
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
    // Size: 0x9d0
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CTriggerDetectExplosion : public server::CBaseTrigger
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x980[0x28]; // 0x980
        entity2::CEntityIOOutput m_OnDetectedExplosion; // 0x9a8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerDetectExplosion because it is not a standard-layout class
    static_assert(sizeof(CTriggerDetectExplosion) == 0x9d0);
};
