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
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast : public client::CDOTA_Buff
    {
    public:
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTA_BaseNPC> m_hTarget;
        char m_hTarget[0x4]; // 0x1708        
        float multicast_delay; // 0x170c        
        int32_t m_nMultiCastCount; // 0x1710        
        bool m_bTalentCast; // 0x1714        
        [[maybe_unused]] std::uint8_t pad_0x1715[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast) == 0x1718);
};
