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
    // Size: 0x988
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CTriggerDetectBulletFire : public server::CBaseTrigger
    {
    public:
        bool m_bPlayerFireOnly; // 0x958        
        [[maybe_unused]] std::uint8_t pad_0x959[0x7]; // 0x959
        entity2::CEntityIOOutput m_OnDetectedBulletFire; // 0x960        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerDetectBulletFire because it is not a standard-layout class
    static_assert(sizeof(CTriggerDetectBulletFire) == 0x988);
};
