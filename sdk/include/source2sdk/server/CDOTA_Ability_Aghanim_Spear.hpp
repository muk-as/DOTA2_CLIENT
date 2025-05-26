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
        // Size: 0x620
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Aghanim_Spear : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> hAlreadyHitList;
            char hAlreadyHitList[0x18]; // 0x5c0            
            // m_vecProjectileHandles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_vecProjectileHandles;
            char m_vecProjectileHandles[0x18]; // 0x5d8            
            uint8_t _pad05f0[0x14]; // 0x5f0
            Vector m_vTarget; // 0x604            
            Vector m_vSourcePosition; // 0x610            
            std::int32_t damage; // 0x61c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Aghanim_Spear because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Aghanim_Spear) == 0x620);
    };
};
