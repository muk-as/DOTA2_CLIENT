#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CDOTA_BaseNPC;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Ogre_Magi_Ignite_Multicast : public client::CDOTA_Buff
    {
    public:
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_BaseNPC> m_hTarget;
        char m_hTarget[0x4]; // 0x1708        
        float multicast_delay; // 0x170c        
        int32_t m_nMultiCastCount; // 0x1710        
        int32_t ignite_multicast_aoe; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Ogre_Magi_Ignite_Multicast because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Ogre_Magi_Ignite_Multicast) == 0x1718);
};
