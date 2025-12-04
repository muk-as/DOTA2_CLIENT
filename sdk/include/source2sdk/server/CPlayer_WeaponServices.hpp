#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerPawnComponent.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBasePlayerWeapon;
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
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle< CBasePlayerWeapon > m_hMyWeapons"
        // static metadata: MNetworkVarNames "CHandle< CBasePlayerWeapon> m_hActiveWeapon"
        // static metadata: MNetworkVarNames "CHandle< CBasePlayerWeapon> m_hLastWeapon"
        // static metadata: MNetworkVarNames "uint16 m_iAmmo"
        #pragma pack(push, 1)
        class CPlayer_WeaponServices : public source2sdk::client::CPlayerPawnComponent
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnMyWeaponsChanged"
            // m_hMyWeapons has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBasePlayerWeapon>> m_hMyWeapons;
            char m_hMyWeapons[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hActiveWeapon has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerWeapon> m_hActiveWeapon;
            char m_hActiveWeapon[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // m_hLastWeapon has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerWeapon> m_hLastWeapon;
            char m_hLastWeapon[0x_]; // 0x_            
            // metadata: MNetworkEnable
            std::uint16_t m_iAmmo[32]; // 0x_            
            bool m_bPreventWeaponPickup; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlayer_WeaponServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPlayer_WeaponServices) == 0x_);
    };
};
