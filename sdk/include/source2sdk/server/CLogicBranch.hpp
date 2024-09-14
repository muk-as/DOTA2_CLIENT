#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x528
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CLogicBranch : public server::CLogicalEntity
    {
    public:
        bool m_bInValue; // 0x4b8        
        [[maybe_unused]] std::uint8_t pad_0x4b9[0x7]; // 0x4b9
        // m_Listeners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_Listeners;
        char m_Listeners[0x18]; // 0x4c0        
        entity2::CEntityIOOutput m_OnTrue; // 0x4d8        
        entity2::CEntityIOOutput m_OnFalse; // 0x500        
        
        // Datamap fields:
        // bool InputSetValue; // 0x0
        // bool InputSetValueTest; // 0x0
        // void InputToggle; // 0x0
        // void InputToggleTest; // 0x0
        // void InputTest; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLogicBranch because it is not a standard-layout class
    static_assert(sizeof(CLogicBranch) == 0x528);
};
