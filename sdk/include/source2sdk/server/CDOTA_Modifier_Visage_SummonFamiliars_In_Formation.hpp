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
        // Size: 0x1838
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Visage_SummonFamiliars_In_Formation : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOwner;
            char m_hOwner[0x4]; // 0x17f8            
            // m_hCurrentTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCurrentTarget;
            char m_hCurrentTarget[0x4]; // 0x17fc            
            std::int32_t familiar_index; // 0x1800            
            std::int32_t back_distance; // 0x1804            
            std::int32_t side_distance; // 0x1808            
            Vector m_vecDesiredPosition; // 0x180c            
            std::int32_t max_distance; // 0x1818            
            std::int32_t return_distance; // 0x181c            
            std::int32_t attack_range_buffer; // 0x1820            
            float recall_duration; // 0x1824            
            bool m_bTeleporting; // 0x1828            
            uint8_t _pad1829[0x3]; // 0x1829
            std::int32_t familiar_attack_range; // 0x182c            
            std::int32_t additional_target_search_radius; // 0x1830            
            uint8_t _pad1834[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Visage_SummonFamiliars_In_Formation because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Visage_SummonFamiliars_In_Formation) == 0x1838);
    };
};
