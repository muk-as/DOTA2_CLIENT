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
        // Size: 0x1820
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Centaur_Cart : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hUnit;
            char m_hUnit[0x4]; // 0x17f8            
            bool m_bWasMoving; // 0x17fc            
            bool m_bSpawnDone; // 0x17fd            
            uint8_t _pad17fe[0x2]; // 0x17fe
            Vector m_vecOldForward; // 0x1800            
            std::int32_t break_distance; // 0x180c            
            Vector m_vecPreviousLocation; // 0x1810            
            uint8_t _pad181c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Centaur_Cart because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Centaur_Cart) == 0x1820);
    };
};
