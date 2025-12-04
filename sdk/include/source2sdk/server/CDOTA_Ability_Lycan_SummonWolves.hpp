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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Lycan_SummonWolves : public source2sdk::server::CDOTABaseAbility
        {
        public:
            char szUnitName[260]; // 0x_            
            std::int32_t wolf_index; // 0x_            
            float wolf_duration; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hExistingUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hExistingUnits;
            char m_hExistingUnits[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Lycan_SummonWolves because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Lycan_SummonWolves) == 0x_);
    };
};
