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
        // Size: 0x618
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Mars_Spear : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> hAlreadyHitList;
            char hAlreadyHitList[0x18]; // 0x5b8            
            uint8_t _pad05d0[0x8]; // 0x5d0
            std::int32_t damage; // 0x5d8            
            uint8_t _pad05dc[0x4]; // 0x5dc
            // hImpaledTargetList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> hImpaledTargetList;
            char hImpaledTargetList[0x18]; // 0x5e0            
            std::int32_t m_nTargetsImpaled; // 0x5f8            
            std::int32_t m_nMaxImpaleTargets; // 0x5fc            
            bool m_bHadBulwarkEnabled; // 0x600            
            uint8_t _pad0601[0x3]; // 0x601
            Vector m_vLastTrailThinkerLocation; // 0x604            
            bool bHasStartedBurning; // 0x610            
            uint8_t _pad0611[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Mars_Spear because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Mars_Spear) == 0x618);
    };
};
