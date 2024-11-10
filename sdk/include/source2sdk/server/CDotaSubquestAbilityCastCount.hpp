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
    // Size: 0x748
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkNoBase
    #pragma pack(push, 1)
    class CDotaSubquestAbilityCastCount : public server::CDotaSubquestBase
    {
    public:
        int32_t m_sAbilityNameSymbol; // 0x738        
        int32_t m_nTargetCastCount; // 0x73c        
        int32_t m_nCurrentCastCount; // 0x740        
        bool m_bRequiresChannelSuccess; // 0x744        
        [[maybe_unused]] std::uint8_t pad_0x745[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDotaSubquestAbilityCastCount because it is not a standard-layout class
    static_assert(sizeof(CDotaSubquestAbilityCastCount) == 0x748);
};
