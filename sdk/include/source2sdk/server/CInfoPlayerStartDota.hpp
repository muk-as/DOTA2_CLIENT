#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPointEntity.hpp"
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
    // Size: 0x510
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bDisabled"
    #pragma pack(push, 1)
    class CInfoPlayerStartDota : public server::CPointEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bDisabled; // 0x4b8        
        [[maybe_unused]] std::uint8_t pad_0x4b9[0x7]; // 0x4b9
        entity2::CEntityIOOutput m_OnEnabled; // 0x4c0        
        entity2::CEntityIOOutput m_OnDisabled; // 0x4e8        
        
        // Datamap fields:
        // void InputSetEnabled; // 0x0
        // void InputSetDisabled; // 0x0
        // void InputSetEnabledExclusively; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CInfoPlayerStartDota because it is not a standard-layout class
    static_assert(sizeof(CInfoPlayerStartDota) == 0x510);
};
