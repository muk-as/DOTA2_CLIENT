#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AmmoIndex_t.hpp"
#include "source2sdk/client/ItemFlagTypes_t.hpp"
#include "source2sdk/client/RumbleEffect_t.hpp"
#include "source2sdk/client/WeaponSound_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x338
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CBasePlayerWeaponVData
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            // metadata: MPropertyDescription "The name of the weapon entity to spawn for this NPC weapon."
            CUtlString m_szClassName; // 0x10            
            // metadata: MPropertyStartGroup "Visuals"
            // metadata: MPropertyDescription "Model used on the ground or held by an entity"
            // m_szWorldModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_szWorldModel;
            char m_szWorldModel[0xe0]; // 0x18            
            // metadata: MPropertyDescription "Model used by the tools only to populate comboboxes for things like animgraph parameter pickers"
            // m_sToolsOnlyOwnerModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_sToolsOnlyOwnerModelName;
            char m_sToolsOnlyOwnerModelName[0xe0]; // 0xf8            
            // metadata: MPropertyDescription "Was the weapon was built right-handed?"
            bool m_bBuiltRightHanded; // 0x1d8            
            // metadata: MPropertyDescription "Allows flipping the model, regardless of whether it is built left or right handed"
            bool m_bAllowFlipping; // 0x1d9            
            uint8_t _pad01da[0x6]; // 0x1da
            // metadata: MPropertyDescription "Attachment to fire bullets from"
            // metadata: MPropertyAttributeEditor "VDataModelAttachment( m_szWorldModel )"
            CAttachmentNameSymbolWithStorage m_sMuzzleAttachment; // 0x1e0            
            // metadata: MPropertyDescription "Effect when firing this weapon"
            // m_szMuzzleFlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szMuzzleFlashParticle;
            char m_szMuzzleFlashParticle[0xe0]; // 0x200            
            // metadata: MPropertyStartGroup "Behavior"
            // metadata: MPropertyDescription "Should both primary and secondary attacks be cooled down together (so cooling down primary attack would cooldown both primary + secondary attacks)?"
            bool m_bLinkedCooldowns; // 0x2e0            
            source2sdk::client::ItemFlagTypes_t m_iFlags; // 0x2e1            
            // metadata: MPropertyStartGroup "Ammo"
            // metadata: MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
            // metadata: MPropertyCustomFGDType "string"
            source2sdk::client::AmmoIndex_t m_nPrimaryAmmoType; // 0x2e2            
            // metadata: MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
            // metadata: MPropertyCustomFGDType "string"
            source2sdk::client::AmmoIndex_t m_nSecondaryAmmoType; // 0x2e3            
            // metadata: MPropertyFriendlyName "Primary Clip Size"
            // metadata: MPropertyDescription "How many bullets this gun can fire before it reloads (0 if no clip)"
            // metadata: MPropertyAttributeRange "0 255"
            std::int32_t m_iMaxClip1; // 0x2e4            
            // metadata: MPropertyFriendlyName "Secondary Clip Size"
            // metadata: MPropertyDescription "How many secondary bullets this gun can fire before it reloads (0 if no clip)"
            // metadata: MPropertyAttributeRange "0 255"
            std::int32_t m_iMaxClip2; // 0x2e8            
            // metadata: MPropertyDescription "Primary Initial Clip (-1 means use clip size)"
            // metadata: MPropertyAttributeRange "-1 255"
            std::int32_t m_iDefaultClip1; // 0x2ec            
            // metadata: MPropertyDescription "Secondary Initial Clip (-1 means use clip size)"
            // metadata: MPropertyAttributeRange "-1 255"
            std::int32_t m_iDefaultClip2; // 0x2f0            
            // metadata: MPropertyDescription "Indicates whether to treat reserve ammo as clips (reloads) instead of raw bullets"
            bool m_bReserveAmmoAsClips; // 0x2f4            
            uint8_t _pad02f5[0x3]; // 0x2f5
            // metadata: MPropertyStartGroup "UI"
            // metadata: MPropertyDescription "This value used to determine this weapon's importance in autoselection"
            std::int32_t m_iWeight; // 0x2f8            
            // metadata: MPropertyFriendlyName "Safe To Auto-Switch To"
            // metadata: MPropertyDescription "Whether this weapon is safe to automatically switch to (should be false for eg. explosives that can the player may accidentally hurt themselves with)"
            bool m_bAutoSwitchTo; // 0x2fc            
            // metadata: MPropertyFriendlyName "Safe To Auto-Switch Away From"
            bool m_bAutoSwitchFrom; // 0x2fd            
            uint8_t _pad02fe[0x2]; // 0x2fe
            source2sdk::client::RumbleEffect_t m_iRumbleEffect; // 0x300            
            // metadata: MPropertyFriendlyName "HUD Bucket"
            // metadata: MPropertyDescription "Which 'column' to display this weapon in the HUD"
            std::int32_t m_iSlot; // 0x304            
            // metadata: MPropertyFriendlyName "HUD Bucket Position"
            // metadata: MPropertyDescription "Which 'row' to display this weapon in the HUD"
            std::int32_t m_iPosition; // 0x308            
            uint8_t _pad030c[0x4]; // 0x30c
            // metadata: MPropertyStartGroup "Sounds"
            // m_aShootSounds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::WeaponSound_t,CSoundEventName> m_aShootSounds;
            char m_aShootSounds[0x28]; // 0x310            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CBasePlayerWeaponVData, m_szClassName) == 0x10);
        static_assert(offsetof(source2sdk::client::CBasePlayerWeaponVData, m_szWorldModel) == 0x18);
        static_assert(offsetof(source2sdk::client::CBasePlayerWeaponVData, m_sToolsOnlyOwnerModelName) == 0xf8);
        static_assert(offsetof(source2sdk::client::CBasePlayerWeaponVData, m_bBuiltRightHanded) == 0x1d8);
        static_assert(offsetof(source2sdk::client::CBasePlayerWeaponVData, m_bAllowFlipping) == 0x1d9);
        static_assert(offsetof(source2sdk::client::CBasePlayerWeaponVData, m_sMuzzleAttachment) == 0x1e0);
        static_assert(offsetof(source2sdk::client::CBasePlayerWeaponVData, m_szMuzzleFlashParticle) == 0x200);
        static_assert(offsetof(source2sdk::client::CBasePlayerWeaponVData, m_bLinkedCooldowns) == 0x2e0);
        static_assert(offsetof(source2sdk::client::CBasePlayerWeaponVData, m_iFlags) == 0x2e1);
        static_assert(offsetof(source2sdk::client::CBasePlayerWeaponVData, m_nPrimaryAmmoType) == 0x2e2);
        static_assert(offsetof(source2sdk::client::CBasePlayerWeaponVData, m_nSecondaryAmmoType) == 0x2e3);
        static_assert(offsetof(source2sdk::client::CBasePlayerWeaponVData, m_iMaxClip1) == 0x2e4);
        static_assert(offsetof(source2sdk::client::CBasePlayerWeaponVData, m_iMaxClip2) == 0x2e8);
        static_assert(offsetof(source2sdk::client::CBasePlayerWeaponVData, m_iDefaultClip1) == 0x2ec);
        static_assert(offsetof(source2sdk::client::CBasePlayerWeaponVData, m_iDefaultClip2) == 0x2f0);
        static_assert(offsetof(source2sdk::client::CBasePlayerWeaponVData, m_bReserveAmmoAsClips) == 0x2f4);
        static_assert(offsetof(source2sdk::client::CBasePlayerWeaponVData, m_iWeight) == 0x2f8);
        static_assert(offsetof(source2sdk::client::CBasePlayerWeaponVData, m_bAutoSwitchTo) == 0x2fc);
        static_assert(offsetof(source2sdk::client::CBasePlayerWeaponVData, m_bAutoSwitchFrom) == 0x2fd);
        static_assert(offsetof(source2sdk::client::CBasePlayerWeaponVData, m_iRumbleEffect) == 0x300);
        static_assert(offsetof(source2sdk::client::CBasePlayerWeaponVData, m_iSlot) == 0x304);
        static_assert(offsetof(source2sdk::client::CBasePlayerWeaponVData, m_iPosition) == 0x308);
        static_assert(offsetof(source2sdk::client::CBasePlayerWeaponVData, m_aShootSounds) == 0x310);
        
        static_assert(sizeof(source2sdk::client::CBasePlayerWeaponVData) == 0x338);
    };
};
