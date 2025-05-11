#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5d8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Ringmaster_TheBox : public source2sdk::server::CDOTABaseAbility
        {
        public:
            bool m_bGrantedScepterCharges; // 0x5b8            
            uint8_t _pad05b9[0x7]; // 0x5b9
            // m_vecBoxedUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecBoxedUnits;
            char m_vecBoxedUnits[0x18]; // 0x5c0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Ringmaster_TheBox because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Ringmaster_TheBox) == 0x5d8);
    };
};
