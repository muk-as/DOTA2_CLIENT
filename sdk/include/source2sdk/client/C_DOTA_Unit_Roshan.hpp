#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Additive.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "bool m_bGoldenRoshan"
        #pragma pack(push, 1)
        class C_DOTA_Unit_Roshan : public source2sdk::client::C_DOTA_BaseNPC_Additive
        {
        public:
            std::int32_t m_iKillerTeam; // 0x_            
            std::int32_t m_iLastHealthPercent; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            // m_hRadiantRoshanPit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hRadiantRoshanPit;
            char m_hRadiantRoshanPit[0x_]; // 0x_            
            // m_hDireRoshanPit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hDireRoshanPit;
            char m_hDireRoshanPit[0x_]; // 0x_            
            // m_hRiverMidpoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hRiverMidpoint;
            char m_hRiverMidpoint[0x_]; // 0x_            
            // m_hAttackingHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hAttackingHeroes;
            char m_hAttackingHeroes[0x_]; // 0x_            
            // metadata: MNetworkEnable
            bool m_bGoldenRoshan; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Unit_Roshan because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Unit_Roshan) == 0x_);
    };
};
