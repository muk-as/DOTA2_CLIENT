#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0x18c8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Visage_SummonFamiliars_In_Formation : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOwner;
            char m_hOwner[0x4]; // 0x1888            
            // m_hCurrentTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCurrentTarget;
            char m_hCurrentTarget[0x4]; // 0x188c            
            std::int32_t familiar_index; // 0x1890            
            std::int32_t back_distance; // 0x1894            
            std::int32_t side_distance; // 0x1898            
            Vector m_vecDesiredPosition; // 0x189c            
            float max_distance; // 0x18a8            
            float return_distance; // 0x18ac            
            float attack_range_buffer; // 0x18b0            
            float recall_duration; // 0x18b4            
            bool m_bTeleporting; // 0x18b8            
            uint8_t _pad18b9[0x3]; // 0x18b9
            std::int32_t familiar_attack_range; // 0x18bc            
            float additional_target_search_radius; // 0x18c0            
            uint8_t _pad18c4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Visage_SummonFamiliars_In_Formation because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Visage_SummonFamiliars_In_Formation) == 0x18c8);
    };
};
