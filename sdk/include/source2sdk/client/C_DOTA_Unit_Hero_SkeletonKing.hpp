#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Hero.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1b98
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int32 m_vecInitialHeroKillBitmask"
        // static metadata: MNetworkVarNames "int32 m_vecInGameHeroKillBitmask"
        #pragma pack(push, 1)
        class C_DOTA_Unit_Hero_SkeletonKing : public source2sdk::client::C_DOTA_BaseNPC_Hero
        {
        public:
            std::int32_t m_nSkeletonWarriors; // 0x1b68            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSKArcanaProgressChanged"
            std::int32_t m_vecInitialHeroKillBitmask[5]; // 0x1b6c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSKArcanaProgressChanged"
            std::int32_t m_vecInGameHeroKillBitmask[5]; // 0x1b80            
            uint8_t _pad1b94[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Unit_Hero_SkeletonKing because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Unit_Hero_SkeletonKing) == 0x1b98);
    };
};
