#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem/SosGroupFieldBehavior_t.hpp"
#include "source2sdk/soundsystem/SosGroupType_t.hpp"
namespace source2sdk
{
    namespace soundsystem
    {
        struct CSosGroupActionSchema;
    };
};

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CSosSoundEventGroupSchema
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyAttributeEditor "Radio"
            source2sdk::soundsystem::SosGroupType_t m_nGroupType; // 0x_            
            // metadata: MPropertyStartGroup "+Block Events"
            bool m_bBlocksEvents; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyReadonlyExpr
            std::int32_t m_nBlockMaxCount; // 0x_            
            // metadata: MPropertyStartGroup
            float m_flMemberLifespanTime; // 0x_            
            bool m_bInvertMatch; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyStartGroup "+Event Name"
            // metadata: MPropertyAttributeEditor "Radio"
            // metadata: MPropertyReadonlyExpr
            source2sdk::soundsystem::SosGroupFieldBehavior_t m_Behavior_EventName; // 0x_            
            // metadata: MPropertyReadonlyExpr
            CUtlString m_matchSoundEventName; // 0x_            
            // metadata: MPropertyStartGroup "+Event SubString"
            bool m_bMatchEventSubString; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyReadonlyExpr
            CUtlString m_matchSoundEventSubString; // 0x_            
            // metadata: MPropertyStartGroup "+Ent Index"
            // metadata: MPropertyAttributeEditor "Radio"
            source2sdk::soundsystem::SosGroupFieldBehavior_t m_Behavior_EntIndex; // 0x_            
            // metadata: MPropertyReadonlyExpr
            float m_flEntIndex; // 0x_            
            // metadata: MPropertyStartGroup "+OpVar Float"
            // metadata: MPropertySuppressExpr "m_nGroupType == SOS_GROUPTYPE_STATIC"
            // metadata: MPropertyAttributeEditor "Radio"
            source2sdk::soundsystem::SosGroupFieldBehavior_t m_Behavior_Opvar; // 0x_            
            // metadata: MPropertyReadonlyExpr
            // metadata: MPropertySuppressExpr "m_nGroupType == SOS_GROUPTYPE_STATIC"
            float m_flOpvar; // 0x_            
            // metadata: MPropertyStartGroup "+OpVar String"
            // metadata: MPropertySuppressExpr "m_nGroupType == SOS_GROUPTYPE_STATIC"
            // metadata: MPropertyAttributeEditor "Radio"
            source2sdk::soundsystem::SosGroupFieldBehavior_t m_Behavior_String; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyReadonlyExpr
            // metadata: MPropertySuppressExpr "m_nGroupType == SOS_GROUPTYPE_STATIC"
            CUtlString m_opvarString; // 0x_            
            // metadata: MPropertyStartGroup
            // metadata: MPropertyAutoExpandSelf
            // m_vActions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem::CSosGroupActionSchema*> m_vActions;
            char m_vActions[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_nGroupType) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_bBlocksEvents) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_nBlockMaxCount) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_flMemberLifespanTime) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_bInvertMatch) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_Behavior_EventName) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_matchSoundEventName) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_bMatchEventSubString) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_matchSoundEventSubString) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_Behavior_EntIndex) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_flEntIndex) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_Behavior_Opvar) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_flOpvar) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_Behavior_String) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_opvarString) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_vActions) == 0x_);
        
        static_assert(sizeof(source2sdk::soundsystem::CSosSoundEventGroupSchema) == 0x_);
    };
};
