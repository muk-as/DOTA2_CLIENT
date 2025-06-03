#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t scepter_move_speed_pct; // 0x1878            
            std::int32_t scepter_attack_speed; // 0x187c            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1880            
            bool m_bPassive; // 0x1884            
            bool m_bKillAtEnd; // 0x1885            
            uint8_t _pad1886[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active) == 0x1888);
    };
};
