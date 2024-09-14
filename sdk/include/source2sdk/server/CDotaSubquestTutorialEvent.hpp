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
    // Size: 0x718
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDotaSubquestTutorialEvent : public server::CDotaSubquestBase
    {
    public:
        CUtlSymbolLarge m_sTutorialEvent; // 0x710        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDotaSubquestTutorialEvent because it is not a standard-layout class
    static_assert(sizeof(CDotaSubquestTutorialEvent) == 0x718);
};
