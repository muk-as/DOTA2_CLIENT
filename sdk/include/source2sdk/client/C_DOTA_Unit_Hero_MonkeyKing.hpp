#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Hero.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1da8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "DotaTreeId_t m_nTreeDisguise"
        // static metadata: MNetworkVarNames "DotaTreeId_t m_nPerchedTree"
        #pragma pack(push, 1)
        class C_DOTA_Unit_Hero_MonkeyKing : public source2sdk::client::C_DOTA_BaseNPC_Hero
        {
        public:
            // metadata: MNetworkEnable
            std::uint32_t m_nTreeDisguise; // 0x1d98            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPerchedTreeChanged"
            std::uint32_t m_nPerchedTree; // 0x1d9c            
            // m_hTreeDisguiseEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTreeDisguiseEnt;
            char m_hTreeDisguiseEnt[0x4]; // 0x1da0            
            uint8_t _pad1da4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Unit_Hero_MonkeyKing because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Unit_Hero_MonkeyKing) == 0x1da8);
    };
};
