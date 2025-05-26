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
        // Size: 0x628
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Mars_Spear : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> hAlreadyHitList;
            char hAlreadyHitList[0x18]; // 0x5c0            
            uint8_t _pad05d8[0x14]; // 0x5d8
            std::int32_t damage; // 0x5ec            
            // hImpaledTargetList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> hImpaledTargetList;
            char hImpaledTargetList[0x18]; // 0x5f0            
            std::int32_t m_nTargetsImpaled; // 0x608            
            std::int32_t m_nMaxImpaleTargets; // 0x60c            
            bool m_bHadBulwarkEnabled; // 0x610            
            uint8_t _pad0611[0x3]; // 0x611
            Vector m_vLastTrailThinkerLocation; // 0x614            
            bool bHasStartedBurning; // 0x620            
            uint8_t _pad0621[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Mars_Spear because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Mars_Spear) == 0x628);
    };
};
