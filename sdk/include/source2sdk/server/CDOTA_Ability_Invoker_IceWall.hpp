#pragma once
#include "source2sdk/server/CDOTA_Ability_Invoker_InvokedBase.hpp"
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
    // Size: 0x5c8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Invoker_IceWall : public server::CDOTA_Ability_Invoker_InvokedBase
    {
    public:
        Vector m_vStartPosition; // 0x5b0        
        Vector m_vEndPosition; // 0x5bc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Invoker_IceWall because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Invoker_IceWall) == 0x5c8);
};
