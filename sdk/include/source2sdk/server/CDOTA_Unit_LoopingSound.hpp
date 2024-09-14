#pragma once
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1918
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "char m_pszNetworkedSoundLoop"
    // static metadata: MNetworkVarNames "int m_nLoopingSoundParity"
    #pragma pack(push, 1)
    class CDOTA_Unit_LoopingSound : public server::CDOTA_BaseNPC_Additive
    {
    public:
        // metadata: MNetworkEnable
        char m_pszNetworkedSoundLoop[256]; // 0x1810        
        // metadata: MNetworkEnable
        int32_t m_nLoopingSoundParity; // 0x1910        
        [[maybe_unused]] std::uint8_t pad_0x1914[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_LoopingSound because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_LoopingSound) == 0x1918);
};
