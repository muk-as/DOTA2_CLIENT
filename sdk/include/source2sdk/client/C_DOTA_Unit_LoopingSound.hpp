#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Additive.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1910
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "char m_pszNetworkedSoundLoop"
    // static metadata: MNetworkVarNames "int m_nLoopingSoundParity"
    #pragma pack(push, 1)
    class C_DOTA_Unit_LoopingSound : public client::C_DOTA_BaseNPC_Additive
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1800[0x8]; // 0x1800
        int32_t m_nPrevLoopingSoundParity; // 0x1808        
        // metadata: MNetworkEnable
        char m_pszNetworkedSoundLoop[256]; // 0x180c        
        // metadata: MNetworkEnable
        int32_t m_nLoopingSoundParity; // 0x190c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Unit_LoopingSound because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Unit_LoopingSound) == 0x1910);
};
