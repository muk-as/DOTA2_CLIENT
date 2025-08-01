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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_StormSpirit_Overload : public source2sdk::client::CDOTA_Buff
        {
        public:
            float overload_aoe; // 0x1878            
            float overload_cast_range; // 0x187c            
            // m_vecHitUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHitUnits;
            char m_vecHitUnits[0x18]; // 0x1880            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_StormSpirit_Overload because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_StormSpirit_Overload) == 0x1898);
    };
};
