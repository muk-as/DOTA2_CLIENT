#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseAnimatingActivity.hpp"
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
    // Size: 0x898
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CItem : public server::CBaseAnimatingActivity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x7c0[0x8]; // 0x7c0
        entity2::CEntityIOOutput m_OnPlayerTouch; // 0x7c8        
        entity2::CEntityIOOutput m_OnPlayerPickup; // 0x7f0        
        bool m_bActivateWhenAtRest; // 0x818        
        [[maybe_unused]] std::uint8_t pad_0x819[0x7]; // 0x819
        entity2::CEntityIOOutput m_OnCacheInteraction; // 0x820        
        entity2::CEntityIOOutput m_OnGlovePulled; // 0x848        
        Vector m_vOriginalSpawnOrigin; // 0x870        
        QAngle m_vOriginalSpawnAngles; // 0x87c        
        bool m_bPhysStartAsleep; // 0x888        
        [[maybe_unused]] std::uint8_t pad_0x889[0xf];
        
        // Datamap fields:
        // void CItemItemTouch; // 0x0
        // void CItemMaterialize; // 0x0
        // void CItemComeToRest; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItem because it is not a standard-layout class
    static_assert(sizeof(CItem) == 0x898);
};
