#pragma once
#include "source2sdk/client/CPlayerPawnComponent.hpp"
#include "source2sdk/client/ObserverMode_t.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0x50
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "uint8 m_iObserverMode"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hObserverTarget"
    #pragma pack(push, 1)
    class CPlayer_ObserverServices : public client::CPlayerPawnComponent
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnObserverModeChanged"
        uint8_t m_iObserverMode; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x41[0x3]; // 0x41
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnObserverTargetChanged"
        // m_hObserverTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hObserverTarget;
        char m_hObserverTarget[0x4]; // 0x44        
        client::ObserverMode_t m_iObserverLastMode; // 0x48        
        bool m_bForcedObserverMode; // 0x4c        
        [[maybe_unused]] std::uint8_t pad_0x4d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPlayer_ObserverServices because it is not a standard-layout class
    static_assert(sizeof(CPlayer_ObserverServices) == 0x50);
};
