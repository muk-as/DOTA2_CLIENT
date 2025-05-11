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
        // 
        // static metadata: MNetworkVarNames "float m_flLongestGazeDuration"
        #pragma pack(push, 1)
        class CDOTA_Ability_Lich_Sinister_Gaze : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // metadata: MNetworkEnable
            float m_flLongestGazeDuration; // 0x5b8            
            uint8_t _pad05bc[0x4]; // 0x5bc
            // m_hAffectedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hAffectedEntities;
            char m_hAffectedEntities[0x18]; // 0x5c0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Lich_Sinister_Gaze because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Lich_Sinister_Gaze) == 0x5d8);
    };
};
