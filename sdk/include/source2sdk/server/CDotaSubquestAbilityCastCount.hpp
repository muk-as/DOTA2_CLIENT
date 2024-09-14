#pragma once
#include "source2sdk/server/CDotaSubquestBase.hpp"
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
    // Size: 0x720
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDotaSubquestAbilityCastCount : public server::CDotaSubquestBase
    {
    public:
        int32_t m_sAbilityNameSymbol; // 0x710        
        int32_t m_nTargetCastCount; // 0x714        
        int32_t m_nCurrentCastCount; // 0x718        
        bool m_bRequiresChannelSuccess; // 0x71c        
        [[maybe_unused]] std::uint8_t pad_0x71d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDotaSubquestAbilityCastCount because it is not a standard-layout class
    static_assert(sizeof(CDotaSubquestAbilityCastCount) == 0x720);
};
