#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerPawnComponent.hpp"
#include "source2sdk/client/ObserverMode_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
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
        class CPlayer_ObserverServices : public source2sdk::client::CPlayerPawnComponent
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnObserverModeChanged"
            std::uint8_t m_iObserverMode; // 0x40            
            uint8_t _pad0041[0x3]; // 0x41
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnObserverTargetChanged"
            // m_hObserverTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hObserverTarget;
            char m_hObserverTarget[0x4]; // 0x44            
            source2sdk::client::ObserverMode_t m_iObserverLastMode; // 0x48            
            bool m_bForcedObserverMode; // 0x4c            
            uint8_t _pad004d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlayer_ObserverServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPlayer_ObserverServices) == 0x50);
    };
};
