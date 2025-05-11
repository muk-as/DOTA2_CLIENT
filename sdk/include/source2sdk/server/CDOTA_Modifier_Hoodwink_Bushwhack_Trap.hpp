#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_TempTree;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_Tree;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1840
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Hoodwink_Bushwhack_Trap : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t visual_height; // 0x17f8            
            float animation_rate; // 0x17fc            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1800            
            bool m_bPullComplete; // 0x1804            
            uint8_t _pad1805[0x3]; // 0x1805
            std::uint32_t m_TreeId; // 0x1808            
            float m_flDamagePerTick; // 0x180c            
            std::int32_t m_nDamageTicks; // 0x1810            
            source2sdk::entity2::GameTime_t m_flLastTick; // 0x1814            
            // m_hTree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_TempTree> m_hTree;
            char m_hTree[0x4]; // 0x1818            
            uint8_t _pad181c[0x4]; // 0x181c
            source2sdk::server::CDOTA_Tree* m_pTree; // 0x1820            
            Vector m_vPullPosition; // 0x1828            
            Vector m_vDir; // 0x1834            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_Bushwhack_Trap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Hoodwink_Bushwhack_Trap) == 0x1840);
    };
};
