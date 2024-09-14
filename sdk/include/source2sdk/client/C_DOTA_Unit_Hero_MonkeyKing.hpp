#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Hero.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1b98
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "DotaTreeId_t m_nTreeDisguise"
    // static metadata: MNetworkVarNames "DotaTreeId_t m_nPerchedTree"
    #pragma pack(push, 1)
    class C_DOTA_Unit_Hero_MonkeyKing : public client::C_DOTA_BaseNPC_Hero
    {
    public:
        // metadata: MNetworkEnable
        uint32_t m_nTreeDisguise; // 0x1b88        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnPerchedTreeChanged"
        uint32_t m_nPerchedTree; // 0x1b8c        
        // m_hTreeDisguiseEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTreeDisguiseEnt;
        char m_hTreeDisguiseEnt[0x4]; // 0x1b90        
        [[maybe_unused]] std::uint8_t pad_0x1b94[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Unit_Hero_MonkeyKing because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Unit_Hero_MonkeyKing) == 0x1b98);
};
