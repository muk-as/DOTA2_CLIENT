#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/client/CSkillFloat.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x178
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CBasePlayerVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            // metadata: MPropertyProvidesEditContextString
            // m_sModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_sModelName;
            char m_sModelName[0xe0]; // 0x28            
            source2sdk::client::CSkillFloat m_flHeadDamageMultiplier; // 0x108            
            source2sdk::client::CSkillFloat m_flChestDamageMultiplier; // 0x118            
            source2sdk::client::CSkillFloat m_flStomachDamageMultiplier; // 0x128            
            source2sdk::client::CSkillFloat m_flArmDamageMultiplier; // 0x138            
            source2sdk::client::CSkillFloat m_flLegDamageMultiplier; // 0x148            
            // metadata: MPropertyGroupName "Water"
            float m_flHoldBreathTime; // 0x158            
            // metadata: MPropertyGroupName "Water"
            // metadata: MPropertyDescription "Seconds between drowning ticks"
            float m_flDrowningDamageInterval; // 0x15c            
            // metadata: MPropertyGroupName "Water"
            // metadata: MPropertyDescription "Amount of damage done on the first drowning tick (+1 each subsequent interval)"
            std::int32_t m_nDrowningDamageInitial; // 0x160            
            // metadata: MPropertyGroupName "Water"
            // metadata: MPropertyDescription "Max damage done by a drowning tick"
            std::int32_t m_nDrowningDamageMax; // 0x164            
            // metadata: MPropertyGroupName "Water"
            std::int32_t m_nWaterSpeed; // 0x168            
            // metadata: MPropertyGroupName "Use"
            float m_flUseRange; // 0x16c            
            // metadata: MPropertyGroupName "Use"
            float m_flUseAngleTolerance; // 0x170            
            // metadata: MPropertyGroupName "Crouch"
            // metadata: MPropertyDescription "Time to move between crouch and stand"
            float m_flCrouchTime; // 0x174            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBasePlayerVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBasePlayerVData) == 0x178);
    };
};
