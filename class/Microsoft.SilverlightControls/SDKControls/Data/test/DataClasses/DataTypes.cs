﻿// (c) Copyright Microsoft Corporation.
// This source is subject to the Microsoft Public License (Ms-PL).
// Please see http://go.microsoft.com/fwlink/?LinkID=131993 for details.
// All other rights reserved.

using System.Windows.Controls.Test;

namespace System.Windows.Controls.Data.Test.DataClasses
{
    public class DataTypes
    {
        public DataTypes()
        {
            this.AString = Common.RandomString(18);
            this.ABoolean = Common.RandomBoolean();
            this.ASByte = Common.RandomSByte();
            this.AInt32 = Common.RandomInt32();
            this.ADouble = Common.RandomDouble();
            this.ADecimal = Common.RandomDecimal();
            this.ADateTime = Common.RandomDateTime();
            this.AEnum = EnumType.One;
            this.AClass = null;
            this.ANullableBoolean = null;
            this.ANullableSByte = null;
            this.ANullableInteger = null;
            this.ANullableDouble = null;
            this.ANullableDecimal = null;
            this.ANullableDateTime = null;
            this.ANullableEnum = null;
        }

        public string AString { get; set; }
        public bool ABoolean { get; set; }
        public SByte ASByte { get; set; }
        public int AInt32 { get; set; }
        public double ADouble { get; set; }
        public decimal ADecimal { get; set; }
        public DateTime ADateTime { get; set; }
        public EnumType AEnum { get; set; }

        [PropertyTestExpectedResults(TestId = "AutogeneratedColumns", IsReadOnly = true)]
        public DataTypes AClass { get; set; }
        public bool? ANullableBoolean { get; set; }
        public SByte? ANullableSByte { get; set; }
        public int? ANullableInteger { get; set; }
        public double? ANullableDouble { get; set; }
        public decimal? ANullableDecimal { get; set; }
        public DateTime? ANullableDateTime { get; set; }
        public EnumType? ANullableEnum { get; set; }
    }

    public class DataTypesINPC : System.ComponentModel.INotifyPropertyChanged
    {
        public DataTypesINPC()
        {
            this.AString = Common.RandomString(18);
            this.ABoolean = Common.RandomBoolean();
            this.ASByte = Common.RandomSByte();
            this.AInt32 = Common.RandomInt32();
            this.ADouble = Common.RandomDouble();
            this.ADecimal = Common.RandomDecimal();
            this.ADateTime = Common.RandomDateTime();
            this.AEnum = EnumType.One;
            this.AClass = null;
            this.ANullableBoolean = null;
            this.ANullableSByte = null;
            this.ANullableInteger = null;
            this.ANullableDouble = null;
            this.ANullableDecimal = null;
            this.ANullableDateTime = null;
            this.ANullableEnum = null;
        }

        #region INotifyPropertyChanged
        public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;
        private void RaisePropertyChanged(string propertyName)
        {
            if (this.PropertyChanged != null)
            {
                PropertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
            }
        }
        #endregion

        #region private fields
        string _AString;
        bool _ABoolean;
        SByte _ASByte;
        int _AInteger;
        double _ADouble;
        decimal _ADecimal;
        DateTime _ADateTime;
        EnumType _AEnum;
        DataTypes _AClass;
        bool? _ANullableBoolean;
        SByte? _ANullableSByte;
        int? _ANullableInteger;
        double? _ANullableDouble;
        decimal? _ANullableDecimal;
        DateTime? _ANullableDateTime;
        EnumType? _ANullableEnum;
        #endregion

        #region public properties
        public string AString
        {
            get { return _AString; }
            set
            {
                if (this._AString != value)
                {
                    _AString = value;
                    RaisePropertyChanged("AString");
                }
            }
        }

        public bool ABoolean
        {
            get { return _ABoolean; }
            set
            {
                if (this._ABoolean != value)
                {
                    _ABoolean = value;
                    RaisePropertyChanged("ABoolean");
                }
            }
        }

        public SByte ASByte
        {
            get { return _ASByte; }
            set
            {
                if (this._ASByte != value)
                {
                    _ASByte = value;
                    RaisePropertyChanged("ASByte");
                }
            }
        }

        public int AInt32
        {
            get { return _AInteger; }
            set
            {
                if (this._AInteger != value)
                {
                    _AInteger = value;
                    RaisePropertyChanged("AInt32");
                }
            }
        }

        public double ADouble
        {
            get { return _ADouble; }
            set
            {
                if (this._ADouble != value)
                {
                    _ADouble = value;
                    RaisePropertyChanged("ADouble");
                }
            }
        }

        public decimal ADecimal
        {
            get { return _ADecimal; }
            set
            {
                if (this._ADecimal != value)
                {
                    _ADecimal = value;
                    RaisePropertyChanged("ADecimal");
                }
            }
        }

        public DateTime ADateTime
        {
            get { return _ADateTime; }
            set
            {
                if (this._ADateTime != value)
                {
                    _ADateTime = value;
                    RaisePropertyChanged("ADateTime");
                }
            }
        }

        public EnumType AEnum
        {
            get { return _AEnum; }
            set
            {
                if (this._AEnum != value)
                {
                    _AEnum = value;
                    RaisePropertyChanged("AEnum");
                }
            }
        }

        [PropertyTestExpectedResults(TestId = "AutogeneratedColumns", IsReadOnly = true)]
        public DataTypes AClass
        {
            get { return _AClass; }
            set
            {
                if (this._AClass != value)
                {
                    _AClass = value;
                    RaisePropertyChanged("AClass");
                }
            }
        }

        public bool? ANullableBoolean
        {
            get { return _ANullableBoolean; }
            set
            {
                if (this._ANullableBoolean != value)
                {
                    _ANullableBoolean = value;
                    RaisePropertyChanged("ANullableBoolean");
                }
            }
        }

        public SByte? ANullableSByte
        {
            get { return _ANullableSByte; }
            set
            {
                if (this._ANullableSByte != value)
                {
                    _ANullableSByte = value;
                    RaisePropertyChanged("ANullableSByte");
                }
            }
        }

        public int? ANullableInteger
        {
            get { return _ANullableInteger; }
            set
            {
                if (this._ANullableInteger != value)
                {
                    _ANullableInteger = value;
                    RaisePropertyChanged("ANullableInteger");
                }
            }
        }

        public double? ANullableDouble
        {
            get { return _ANullableDouble; }
            set
            {
                if (this._ANullableDouble != value)
                {
                    _ANullableDouble = value;
                    RaisePropertyChanged("ANullableDouble");
                }
            }
        }

        public decimal? ANullableDecimal
        {
            get { return _ANullableDecimal; }
            set
            {
                if (this._ANullableDecimal != value)
                {
                    _ANullableDecimal = value;
                    RaisePropertyChanged("ANullableDecimal");
                }
            }
        }

        public DateTime? ANullableDateTime
        {
            get { return _ANullableDateTime; }
            set
            {
                if (this._ANullableDateTime != value)
                {
                    _ANullableDateTime = value;
                    RaisePropertyChanged("ANullableDateTime");
                }
            }
        }

        public EnumType? ANullableEnum
        {
            get { return _ANullableEnum; }
            set
            {
                if (this._ANullableEnum != value)
                {
                    _ANullableEnum = value;
                    RaisePropertyChanged("ANullableEnum");
                }
            }
        }
        #endregion
    }
}