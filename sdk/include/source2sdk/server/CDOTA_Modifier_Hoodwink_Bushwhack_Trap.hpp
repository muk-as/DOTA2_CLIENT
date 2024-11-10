#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CDOTA_TempTree;
};

namespace source2sdk::server
{
    class CDOTA_Tree;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1750
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Hoodwink_Bushwhack_Trap : public client::CDOTA_Buff
    {
    public:
        int32_t visual_height; // 0x1708        
        float animation_rate; // 0x170c        
        client::ParticleIndex_t m_nFXIndex; // 0x1710        
        bool m_bPullComplete; // 0x1714        
        [[maybe_unused]] std::uint8_t pad_0x1715[0x3]; // 0x1715
        uint32_t m_TreeId; // 0x1718        
        float m_flDamagePerTick; // 0x171c        
        int32_t m_nDamageTicks; // 0x1720        
        entity2::GameTime_t m_flLastTick; // 0x1724        
        // m_hTree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_TempTree> m_hTree;
        char m_hTree[0x4]; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4]; // 0x172c
        server::CDOTA_Tree* m_pTree; // 0x1730        
        Vector m_vPullPosition; // 0x1738        
        Vector m_vDir; // 0x1744        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_Bushwhack_Trap because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Hoodwink_Bushwhack_Trap) == 0x1750);
};
