#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_DOTA_BaseNPC;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Ogre_Magi_Ignite_Multicast : public client::CDOTA_Buff
    {
    public:
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTA_BaseNPC> m_hTarget;
        char m_hTarget[0x4]; // 0x16e8        
        float multicast_delay; // 0x16ec        
        int32_t m_nMultiCastCount; // 0x16f0        
        int32_t ignite_multicast_aoe; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Ogre_Magi_Ignite_Multicast because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Ogre_Magi_Ignite_Multicast) == 0x16f8);
};
